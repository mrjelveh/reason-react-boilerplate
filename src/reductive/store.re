type action =
  | IsAuth
  | Pending;

let auth = (state, action) =>
  switch action {
  | IsAuth => action
  | Pending => action
  };


let store = Reductive.Store.create(~reducer=auth, ~preloadedState={}, ());
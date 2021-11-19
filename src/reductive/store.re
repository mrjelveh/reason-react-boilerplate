type action =
  | Authenticated
  | Guest
  | Pending;

let auth = (state, action) =>
  switch action {
    | Authenticated => state
    | Guest => state
    | Pending => state
  };


let store = Reductive.Store.create(~reducer=auth, ~preloadedState=Guest, ());